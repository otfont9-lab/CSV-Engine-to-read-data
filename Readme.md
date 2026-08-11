High-Performance CSV Aggregation Engine ⚡

This is an end-to-end project used to ingest huge amount of data from a CSV source from different countries; (list of price and reservations) and return basic aggregate statistics.Even this is not an automatizable project since only works for a very limited type of structure, this is a first approach to a CSV Aggregation using Code C++.´

The project is splitted on f a modular structure to separate the interfaces from the execution logic[The modular Separation has been doone/heavily supported by AI ]

- `CSVReader.h`: Declares the data structures and main processing functions.
- `CSVReader.cpp`: It's the main engine; the core code lies here and is set to read, process the data, and output the aggregated statistics.
- `main.cpp`: Measures the execution time of the program and hosts the execution logic that runs the entire application.

## 🚀 Key Technical Features

- **End-to-End Pipeline:** Ingests raw text data and outputs summarized statistics (totals, counts, averages) per country.
- **Memory Optimization:** Uses `.reserve()` to optimize memory allocation and maximize processing speed during large dataset ingestion.
- **Modular Compilation:** Clean separation into `.h` and `.cpp` files to reduce compilation times and allow reusability (though reusability is currently constrained by the fixed structure).
[I've been storngly guided by AI during this part devoted to split the main code into three modules]
- **Execution Benchmarking:** High-precision timing via the C++ `<chrono>` library.
## 💻 How to Run

Compile all modules together:


```bash
g++ main.cpp CSVReader.cpp -o csv_engine
./csv_engine
