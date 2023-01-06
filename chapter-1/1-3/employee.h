namespace HR {
enum class Title { Manager, Senior_Engineer, Engineer };
struct Employee {
  char firstInitial;
  char lastInitial;
  int employeeNumber;
  int salary;
  Title title;
};
} // namespace HR