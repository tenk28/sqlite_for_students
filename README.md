# Build

Go to project root, run:
```bash
cmake -B build
cd build
make
```

# Run

Common run
```bash
./sqlite_runner
```

Show all students
```bash
./sqlite_test SELECT * FROM students;
```

Create table students
```bash
./sqlite_test "CREATE TABLE students(name TEXT, age INT, best_lesson TEXT);"
```

Insert row into table students
```bash
./sqlite_test "INSERT INTO students VALUES('ILLIA', 15, 'Math');"
```
