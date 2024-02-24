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
./sqlite_runner "SELECT * FROM students;"
```

Create table students
```bash
./sqlite_runner "CREATE TABLE students(name TEXT, age INT, best_lesson TEXT);"
```

Insert row into table students
```bash
./sqlite_runner "INSERT INTO students VALUES('ILLIA', 15, 'Math');"
./sqlite_runner "INSERT INTO students VALUES('IVAN', 16, 'English');"
```
