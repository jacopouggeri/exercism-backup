class Complement
  VERSION = 3
  def self.of_dna(strand)
    dna_to_rna = {G: "C", C: "G", T: "A", A: "U"}
    if strand.length == 1
      raise ArgumentError unless dna_to_rna.keys.any? {|e| e.to_s == strand}
      dna_to_rna[strand.to_sym]
    else
      raise ArgumentError unless (0...strand.length).all? {|i| dna_to_rna.keys.any? {|e| e.to_s == strand[i]}}
      rna_strand = ""; (0...strand.length).each {|i| rna_strand << dna_to_rna[strand[i].to_sym].to_s}
      rna_strand
    end
  end
end