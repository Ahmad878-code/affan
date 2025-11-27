<!-- FILE: index.html -->
<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <title>DailyReads — Article-based Demo</title>
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <header class="site-header">
    <div class="container header-inner">
      <h1 class="brand">DailyReads</h1>
      <div class="header-controls">
        <input id="search" class="search" placeholder="Search articles..." aria-label="Search articles"/>
        <button id="themeToggle" class="btn small">🌙</button>
      </div>
    </div>
    <nav class="tagbar" aria-label="Article tags">
      <button class="tag active" data-tag="all">All</button>
      <button class="tag" data-tag="tech">Tech</button>
      <button class="tag" data-tag="culture">Culture</button>
      <button class="tag" data-tag="travel">Travel</button>
    </nav>
  </header>

  <main class="container main-grid">
    <section class="articles" id="articles">
      <!-- Article cards generated in HTML for quick copy — JS will enhance them -->

      <article class="card" data-tags="tech">
        <img src="https://picsum.photos/seed/tech1/800/400" alt="AI illustration" class="card-image"/>
        <div class="card-body">
          <h2 class="card-title">How AI is Shaping Everyday Tools</h2>
          <p class="meta">By Aisha Khan • <span class="readtime">4 min read</span></p>
          <p class="card-excerpt">From smarter email replies to intelligent photo search — practical uses of AI that are already here.</p>
          <div class="card-actions">
            <button class="btn readmore">Read more</button>
            <div class="tags"><span class="pill">Tech</span></div>
          </div>
          <div class="full-article" hidden>
            <p>Artificial Intelligence (AI) is no longer only a research topic — it's embedded in the apps you use every day. Small model optimizations and better data pipelines now let developers ship features like instant summarization, content-aware search, and adaptive UIs. We'll look at three examples: email assistants, photo search, and accessibility helpers — and how they impact user privacy and productivity.</p>
            <p><em>Published: Nov 23, 2025</em></p>
          </div>
        </div>
      </article>

      <article class="card" data-tags="culture">
        <img src="https://picsum.photos/seed/culture1/800/400" alt="Coffee shop scene" class="card-image"/>
        <div class="card-body">
          <h2 class="card-title">Why Independent Cafés are Having a Moment</h2>
          <p class="meta">By Ali Raza • <span class="readtime">6 min read</span></p>
          <p class="card-excerpt">From curated playlists to community events — the rebirth of local gathering spots.</p>
          <div class="card-actions">
            <button class="btn readmore">Read more</button>
            <div class="tags"><span class="pill">Culture</span></div>
          </div>
          <div class="full-article" hidden>
            <p>Independent cafés blend coffee craft with culture, hosting book swaps, open mic nights, and pop-up shops. They're redesigning the coffee experience around local identity and sustainable sourcing. In this piece we visit three cafés and share what makes them special.</p>
            <p><em>Published: Oct 10, 2025</em></p>
          </div>
        </div>
      </article>

      <article class="card" data-tags="travel">
        <img src="https://picsum.photos/seed/travel1/800/400" alt="Coastal path" class="card-image"/>
        <div class="card-body">
          <h2 class="card-title">A Slow Weekend on the Coast</h2>
          <p class="meta">By Mariam • <span class="readtime">3 min read</span></p>
          <p class="card-excerpt">A short guide to disconnecting: where to stay, what to pack, and how to travel lighter.</p>
          <div class="card-actions">
            <button class="btn readmore">Read more</button>
            <div class="tags"><span class="pill">Travel</span></div>
          </div>
          <div class="full-article" hidden>
            <p>Choosing slower travel — shorter distances, local food, and long walks — refreshes your perspective. This guide includes three coastal routes, comfortable lodgings, and local dishes to try. Bring layers and a good pair of walking shoes.</p>
            <p><em>Published: Sep 2, 2025</em></p>
          </div>
        </div>
      </article>

    </section>

    <aside class="sidebar">
      <div class="card small">
        <h3>About DailyReads</h3>
        <p>Short, well-curated articles to brighten your day. Built as a demo with HTML, CSS and JavaScript.</p>
      </div>

      <div class="card small">
        <h3>Popular Tags</h3>
        <div class="tag-cloud">
          <button class="tag" data-tag="tech">Tech</button>
          <button class="tag" data-tag="culture">Culture</button>
          <button class="tag" data-tag="travel">Travel</button>
        </div>
      </div>

      <div class="card small">
        <h3>Newsletter</h3>
        <form id="subscribe">
          <input type="email" placeholder="email@example.com" required />
          <button class="btn" type="submit">Subscribe</button>
        </form>
      </div>
    </aside>
  </main>

  <footer class="site-footer">
    <div class="container">
      <small>© DailyReads — demo site • Built with ❤️</small>
    </div>
  </footer>

  <script src="script.js"></script>
</body>
</html>


/* =================================================================== */
/* FILE: styles.css */
/* Save as styles.css and place alongside index.html */
:root{
  --bg:#f7f8fb;
  --card:#ffffff;
  --text:#0b1220;
  --muted:#6b7280;
  --accent:#2563eb;
  --radius:12px;
}

/* Dark mode variables */
:root.dark{
  --bg:#071024;
  --card:#071a2a;
  --text:#e6eef8;
  --muted:#9aa9bd;
  --accent:#4f9cff;
}

*{box-sizing:border-box}
html,body{height:100%;margin:0;font-family:Inter,ui-sans-serif,system-ui,-apple-system,"Segoe UI",Roboto,"Helvetica Neue",Arial}
body{background:var(--bg);color:var(--text);line-height:1.5}
.container{max-width:1100px;margin:0 auto;padding:1rem}
.header-inner{display:flex;align-items:center;justify-content:space-between;padding:1rem 0}
.brand{margin:0;font-size:1.5rem;letter-spacing:0.3px}
.header-controls{display:flex;gap:0.5rem;align-items:center}
.search{padding:0.5rem 0.75rem;border-radius:999px;border:1px solid rgba(11,18,32,0.08);min-width:190px}
.btn{background:var(--accent);color:white;border:none;padding:0.5rem 0.75rem;border-radius:8px;cursor:pointer}
.btn.small{padding:0.35rem 0.5rem;border-radius:8px}
.tagbar{display:flex;gap:0.5rem;padding:0 1rem 1rem}
.tag{background:transparent;border:1px solid transparent;padding:0.4rem 0.6rem;border-radius:999px;cursor:pointer}
.tag.active{background:var(--card);box-shadow:0 2px 10px rgba(2,6,23,0.06)}
.main-grid{display:grid;grid-template-columns:1fr 320px;gap:1.25rem;padding-bottom:3rem}
.articles{display:grid;gap:1rem}
.card{background:var(--card);border-radius:var(--radius);overflow:hidden;box-shadow:0 6px 18px rgba(2,6,23,0.06)}
.card.small{padding:1rem}
.card-image{width:100%;height:180px;object-fit:cover;display:block}
.card-body{padding:1rem}
.card-title{margin:0 0 0.5rem;font-size:1.125rem}
.meta{margin:0 0 0.75rem;color:var(--muted);font-size:0.9rem}
.card-excerpt{margin:0 0 1rem;color:var(--muted)}
.card-actions{display:flex;justify-content:space-between;align-items:center}
.tags .pill{background:rgba(0,0,0,0.06);padding:0.25rem 0.5rem;border-radius:999px;font-size:0.8rem}
.full-article{padding-top:1rem;border-top:1px dashed rgba(0,0,0,0.04)}
.sidebar .tag-cloud{display:flex;flex-wrap:wrap;gap:0.5rem}
.site-footer{padding:1.5rem 0;color:var(--muted);text-align:center}

/* Responsiveness */
@media (max-width:900px){
  .main-grid{grid-template-columns:1fr}
  .sidebar{order:2}
}

/* Small utility */
.hidden{display:none}

/* Add subtle transitions */
.card, .search, .btn{transition:all 220ms cubic-bezier(.2,.9,.2,1)}

/* =================================================================== */
/* FILE: script.js */
/* Save as script.js and place alongside index.html */

// Basic interactive behavior: search, tag filter, read more toggle, theme toggle, subscribe
(function(){
  const search = document.getElementById('search');
  const articles = Array.from(document.querySelectorAll('.card'));
  const tags = Array.from(document.querySelectorAll('.tag'));
  const themeToggle = document.getElementById('themeToggle');
  const subscribe = document.getElementById('subscribe');

  // Search
  function applyFilter(){
    const q = (search.value || '').trim().toLowerCase();
    const activeTag = document.querySelector('.tagbar .tag.active')?.dataset.tag || 'all';

    articles.forEach(card => {
      const title = card.querySelector('.card-title').textContent.toLowerCase();
      const excerpt = card.querySelector('.card-excerpt').textContent.toLowerCase();
      const cardTags = card.dataset.tags || '';

      const matchesQuery = q === '' || title.includes(q) || excerpt.includes(q);
      const matchesTag = activeTag === 'all' || cardTags.split(',').map(t=>t.trim()).includes(activeTag);

      card.style.display = (matchesQuery && matchesTag) ? '' : 'none';
    });
  }

  search.addEventListener('input', applyFilter);

  // Tag buttons in both header and sidebar
  tags.forEach(t => t.addEventListener('click', e => {
    // remove active in the tagbar only (header tagbar) or all tags in nav
    document.querySelectorAll('.tagbar .tag').forEach(b=>b.classList.remove('active'));
    // add active to clicked if it's inside tagbar or the header's tagbar
    const tb = e.currentTarget.closest('.tagbar');
    if(tb) e.currentTarget.classList.add('active');

    // Also sync header tagbar active when clicking sidebar ones
    const tagName = e.currentTarget.dataset.tag;
    document.querySelectorAll('.tag').forEach(b=>{
      if(b.dataset.tag === tagName && b.closest('.tagbar')) b.classList.add('active');
      if(b.dataset.tag !== tagName && b.closest('.tagbar')) b.classList.remove('active');
    });

    applyFilter();
  }));

  // Read more toggle
  document.querySelectorAll('.readmore').forEach(btn => {
    btn.addEventListener('click', e => {
      const card = e.currentTarget.closest('.card');
      const full = card.querySelector('.full-article');
      const isHidden = full.hidden;
      full.hidden = !isHidden;
      e.currentTarget.textContent = isHidden ? 'Show less' : 'Read more';
    });
  });

  // Theme toggle with localStorage
  function setTheme(dark){
    if(dark) document.documentElement.classList.add('dark');
    else document.documentElement.classList.remove('dark');
    themeToggle.textContent = dark ? '☀️' : '🌙';
    localStorage.setItem('prefers-dark', dark ? '1' : '0');
  }
  themeToggle.addEventListener('click', ()=> setTheme(!document.documentElement.classList.contains('dark')));
  const stored = localStorage.getItem('prefers-dark');
  if(stored === null){
    // try OS preference
    const prefersDark = window.matchMedia && window.matchMedia('(prefers-color-scheme: dark)').matches;
    setTheme(prefersDark);
  } else setTheme(stored === '1');

  // Subscribe demo behavior
  if(subscribe){
    subscribe.addEventListener('submit', e => {
      e.preventDefault();
      const email = e.target.querySelector('input[type=email]').value;
      // simple validation
      if(!email.includes('@')){
        alert('Please enter a valid email.');
        return;
      }
      e.target.reset();
      alert('Thanks — you are subscribed! (demo)');
    });
  }

  // Enhance readtime text automatically from full article length
  articles.forEach(card => {
    const full = card.querySelector('.full-article');
    const readTimeEl = card.querySelector('.readtime');
    if(full && readTimeEl){
      const words = full.textContent.trim().split(/\s+/).length;
      const minutes = Math.max(1, Math.round(words / 200));
      readTimeEl.textContent = minutes + ' min read';
    }
  });

})();
