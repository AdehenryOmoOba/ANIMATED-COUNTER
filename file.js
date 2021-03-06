const counters = document.querySelectorAll(".counter");
const speed = 500;

counters.forEach((counter) => {
  const updateCount = () => {
    const target = +counter.getAttribute("data-target");
    const count = +counter.innerText;
    const increase = Math.ceil(target / speed);

    if (count < target) {
      counter.innerText = count + increase;
      setTimeout(updateCount, 1);
    } else {
      count.innerText = target;
    }
  };
  updateCount();
});
