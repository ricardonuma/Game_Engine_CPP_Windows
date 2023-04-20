#define is_down(b) input->buttons[b].is_down
#define pressed(b) (input->buttons[b].is_down && input->buttons[b].changed)
#define released(b) (!input->buttons[b].is_down && input->buttons[b].changed)

float player_1_p =0.f , player_1_dp =0.f, player_2_p, player_2_dp;


internal void
simulate_game(Input* input, float dt) {
	clear_screen(0xff5500);

	float speed = 50.f;
	if (is_down(BUTTON_UP)) player_1_p += speed * dt;
	if (is_down(BUTTON_DOWN)) player_1_p -= speed * dt;
	if (is_down(BUTTON_RIGHT)) player_1_dp += speed * dt;
	if (is_down(BUTTON_LEFT)) player_1_dp -= speed * dt;

	draw_rect(player_1_dp, player_1_p, 1, 1, 0xffaa33);
}