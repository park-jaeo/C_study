class Engine {
 public:
   Engine(int numCylinders);
   void start();                 // Starts this Engine
};

class Car {
  public:
    Car() : e_(8) { }             // Initializes this Car with 8 cylinders
    void start() { e_.start(); }  // Start this Car by starting its Engine
  private:
    Engine e_;                    // Car has-a Engine
};
//To obtain the same semantic, you could also write the car Class as follow:

class Car : private Engine {    // Car has-a Engine
 public:
   Car() : Engine(8) { }         // Initializes this Car with 8 cylinders
   using Engine::start;          // Start this Car by starting its Engine
}; 