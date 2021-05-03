#include "headers/game_object.hpp"

void GameObject::draw(Renderer &renderer)
{
	renderer.draw_texture(
		this->sprite,
		this->obj_offset,
		this->obj_position,
		this->obj_z_index,
		this->obj_size,
		this->obj_rotation,
		this->obj_color
	);
}