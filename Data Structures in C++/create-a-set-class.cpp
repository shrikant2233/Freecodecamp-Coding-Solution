class Set {
  constructor() {
    this.collection = [];
  }
  has(element) {
    return this.collection.indexOf(element) !== -1;
  }
  values() {
    return this.collection;
  }
  add(element) {
    if (!this.has(element)) {
      this.collection.push(element);
      return true;
    } else {
      return false;
    }
  }
  remove(element) {
    if (this.has(element)) {
      let i = this.collection.indexOf(element);
      this.collection.splice(i, 1);
      return true;
    }
    return false;
  }
  size() {
    return this.collection.length;
  }
}

