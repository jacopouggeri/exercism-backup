class Raindrops
  def self.convert(n)
    drops = ""
    factors = {Pling: 3, Plang: 5, Plong: 7}
    factors.each do |key, factor|
      drops << key.to_s if n % factor == 0
    end
    drops = n.to_s if drops == ""
    drops
  end
end