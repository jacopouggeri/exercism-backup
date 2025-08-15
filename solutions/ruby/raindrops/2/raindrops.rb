class Raindrops
  def self.convert(n)
    map = {Pling: 3, Plang: 5, Plong: 7}
    drops = map.keys.select {|key| n % map[key] == 0}
    return drops.none? ? n.to_s : drops.join("")
  end
end