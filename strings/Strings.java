class Strings {
	public static boolean isUniqueChars2(String str) { // could just use contains()
	      if (str.length() > 256) return false;

	      boolean[] char_set = new boolean[256];
	      for (int i = 0; i < str.length(); i++) {
		int val = str.charAt(i);
		if (char_set[val]) { // already found char in string
		  return false;
		}
		char_set[val] = true;
	      }
	      return true;
	    }

	public static void main(String[] args) {
		System.out.println(isUniqueChars2(args[0]));
	}	
}