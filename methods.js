//https://www.facebook.com/permalink.php?story_fbid=1257912057879489&id=100009821208324
//Subscribed to codehouse!

function winsor(percentile, arr) {
  let rv = arr.slice();
  const len = rv.length;

  const mean = m.mean(rv);
  const std = m.std(rv);

  rv = rv.map(v => (v - mean) / std);

  const percentage = percentile / 100 / 2;
  const min = m.min(rv);
  // const min = m.quantileSeq(rv, percentage);
  const max = m.max(rv);
  // const max = m.quantileSeq(rv, 1 - percentage);
  for (let i = 0; i < len; i++) {
    if (rv[i] < min) rv[i] = min;
    else if (rv[i] > max) rv[i] = max;

    // rv[i] = normalize(min, max, rv[i]);
  }

  return rv;
}
