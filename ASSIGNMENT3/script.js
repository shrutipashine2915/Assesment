const rectangles = document.querySelectorAll('.rectangle');

rectangles.forEach(rectangle => {
  rectangle.addEventListener('click', () => {
    rectangles.forEach(r => {
      r.classList.remove('active');
    });
    rectangle.classList.add('active');
  });
});
