var Node = function(data, prev) {
  this.data = data;
  this.prev = prev;
  this.next = null;
};
var DoublyLinkedList = function() {
  this.head = null;
  this.tail = null;
  // change code below this line
  this.add = function(element) {
    let node = new Node(element, this.tail);
    let currentNode = this.head;
    let previousNode;

    if (this.head === null) {
      this.head = node;
      this.tail = node;
    } else {
      while (currentNode.next) {
        previousNode = currentNode;
        currentNode = currentNode.next;
      }
      node.prev = currentNode;
      currentNode.next = node;
      this.tail = node;
    }
  };
  this.reverse = function() {
    let temp = null;
    let currentNode = this.head;

    if (this.head === null) {
      return null;
    }

    this.tail = currentNode;

    while (currentNode) {
      temp = currentNode.prev;
      currentNode.prev = currentNode.next;
      currentNode.next = temp;
      currentNode = currentNode.prev;
    }

    if (temp != null) {
      this.head = temp.prev;
    }
  };
  // change code above this line
};
