/*
** EPITECH PROJECT, 2020
** Collide.cpp
** File description:
** Collide
*/

#include "System/Collide.hpp"
#include "Core/Coordinator.hpp"

void Collide::init(std::shared_ptr<Coordinator> _coordinator)
{
    coordinator = _coordinator;
}


void Collide::checkBullet(const sf::Sprite &bullet, int id)
{
    for (int anotherId : entity) {
        if (anotherId != id) {
            Tag anotherTag = coordinator->getTagByid(anotherId);
            const sf::Sprite &enemy = coordinator->GetComponent<Sprite>(anotherId)->sprite;
            if (anotherTag == Tag::ENEMY) {
                if (bullet.getGlobalBounds().intersects(enemy.getGlobalBounds()))
                    destroyingEntities.push_back(anotherId);
            }
        }
    }
}

void Collide::checkEnemyBullet(const sf::Sprite &bullet, int id)
{
    for (int anotherId : entity) {
        if (anotherId != id) {
            Tag anotherTag = coordinator->getTagByid(anotherId);
            const sf::Sprite &enemy = coordinator->GetComponent<Sprite>(anotherId)->sprite;
            if (anotherTag == Tag::PLAYER) {
                if (bullet.getGlobalBounds().intersects(enemy.getGlobalBounds())) {
                    destroyingEntities.push_back(anotherId);
                }
            }
        }
    }
}

void Collide::update()
{
    for (int id : entity) {
        Tag tag = coordinator->getTagByid(id);

        const sf::Sprite &bullet = coordinator->GetComponent<Sprite>(id)->sprite;
        switch (tag) {
            case Tag::BULLET :
                this->checkBullet(bullet, id);
                break;
            case Tag::ENEMY_BULLET :
                this->checkEnemyBullet(bullet, id);
                break;
            default :
                break;
        }
    }
    for (int id : destroyingEntities)
        coordinator->DestroyEntity(id);
    destroyingEntities.clear();
}
