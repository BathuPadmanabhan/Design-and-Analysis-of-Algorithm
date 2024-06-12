class Atom:
    def __init__(self, element):
        self.element = element

class Molecule:
    def __init__(self):
        self.atoms = []

    def add_atom(self, atom):
        self.atoms.append(atom)


oxygen = Atom("O")
hydrogen1 = Atom("H")
hydrogen2 = Atom("H")


water = Molecule()
water.add_atom(oxygen)
water.add_atom(hydrogen1)
water.add_atom(hydrogen2)
