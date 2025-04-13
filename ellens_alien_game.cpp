namespace targets {
    class Alien{
        public:
            Alien(int new_x_coordinate, int new_y_coordinate) {
                x_coordinate = new_x_coordinate;
                y_coordinate = new_y_coordinate;
            }
            int get_health() {return health;}
            bool hit() {
                if (health > 0) 
                {
                    health -= 1;
                    return true;
                }
                else {return true;}
            }
            bool is_alive() {
                if (health > 0) {return true;}
                else {return false;}
            }
            bool teleport(int new_x_coordinate, int new_y_coordinate) {
                x_coordinate = new_x_coordinate;
                y_coordinate = new_y_coordinate;
                return true;
            }
            bool collision_detection(Alien alien) {
                if (x_coordinate == alien.x_coordinate && y_coordinate == alien.y_coordinate) {return true;}
                else {return false;}
            }

            int x_coordinate{};
            int y_coordinate{};

        private:
            int health{3};
    };

}  // namespace targets
