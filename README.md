<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <title>Algorithm Visualizations README</title>
  <style>
    /* Prevent text selection */
    body {
      -webkit-user-select: none;  /* Safari */
      -moz-user-select: none;     /* Firefox */
      -ms-user-select: none;      /* IE10+/Edge */
      user-select: none;          /* Standard */
      font-family: Arial, sans-serif;
      padding: 20px;
      line-height: 1.6;
    }

    /* Optional: Change cursor to default arrow */
    body {
      cursor: default;
    }
  </style>
</head>
<body>

  <h1>🔎 Searching and Sorting Algorithms Visualized</h1>

  <p>This project demonstrates classic <strong>Searching</strong> and <strong>Sorting</strong> algorithms using C++, along with runtime comparisons. Below you can find visual step-by-step animations for better understanding.</p>

  <hr />

<h2>📦 <strong>Algorithms Included</strong></h2>
  <ul>
    <li>✅ Merge Sort</li>
    <li>✅ Quick Sort</li>
    <li>✅ Binary Search</li>
    <li>✅ Exponential Search</li>
  </ul>

  <hr />

<h2>🖥️ <strong>Sorting Algorithm Visualizations</strong></h2>

<h3>📊 Merge Sort</h3>
<img src="https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif" alt="Merge Sort Animation" />
  <p><strong>Description:</strong> Merge Sort divides the array into halves recursively and merges them in a sorted manner.</p>

  <hr />

<h3>⚡ Quick Sort</h3>
<img src="https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif" alt="Quick Sort Animation" />
  <p><strong>Description:</strong> Quick Sort selects a pivot, partitions the array, and recursively sorts each part.</p>

  <hr />

<h2>🔍 <strong>Searching Algorithm Visualizations</strong></h2>

<h3>🔎 Binary Search</h3>
<img src="https://d18l82el6cdm1i.cloudfront.net/uploads/bePceUMnSG-binary_search_gif.gif" alt="Binary Search Animation" />
  <p><strong>Description:</strong> Binary Search repeatedly divides the sorted array to locate the target element efficiently.</p>

  <hr />

<h3>🚀 Exponential Search</h3>
<img src="https://content.codecademy.com/courses/search-course/visualizations/binarySearch.gif" alt="Exponential Search Animation" />
  <p><strong>Description:</strong> Exponential Search rapidly identifies the search range and then applies Binary Search.</p>

  <hr />

  <script>
    // Disable right-click context menu
    document.addEventListener('contextmenu', event => event.preventDefault());

    // Optional: Disable Ctrl+C and Ctrl+X shortcuts
    document.addEventListener('keydown', function(event) {
      if ((event.ctrlKey || event.metaKey) && (event.key === 'c' || event.key === 'x')) {
        event.preventDefault();
        alert('Copying is disabled on this page.');
      }
    });
  </script>

</body>
</html>
