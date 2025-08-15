require_relative "primes"
# Primes.new(n).primes generates an array containing the first n primes

class PrimeFactors
  public
  def self.for(int)
    r = []
    prim = Primes.new(int).primes.find_all {|x| x <= int}
    return r if int == 1 || prim.any? {|x| x == int}
    to_a = int
    prim.each do |i|
      while to_a % i == 0
          to_a /= i
          r << i
      end
    end
    r
  end
end