import java.util.*;

public class DnaStrand
{
  private static final Map<Character, String> dnaComplements;
  static
  {
      dnaComplements = new HashMap<Character, String>();
      dnaComplements.put('A', "T");
      dnaComplements.put('T', "A");
      dnaComplements.put('C', "G");
      dnaComplements.put('G', "C");
  }


  public static String makeComplement(String dna)
  {
    String complement = new String();
    for (int i = 0; i < dna.length(); i++)
    {
      complement += dnaComplements.get(dna.charAt(i));
    }

    return complement;
  }

  public static void main(String[] args)
  {
    String dna = args[0];

    String complement = makeComplement(dna);

    System.out.println(complement);
  }
}