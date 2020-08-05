/**
 * @ param {string} s
 * @ return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let longest = 0;
  let cur = "";

  for (let i = 0; i < s.length; i++) {
    cur = cur.substring(cur.indexOf(s[i]) + 1);
    cur += s[i];

    if (cur.length > longest) {
      longest = cur.length;
    }
  }

  return longest;
};
