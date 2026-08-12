int __thiscall sub_101811F0(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // eax

  v2 = *this;
  v3 = (*(int (__thiscall **)(int *, const char *, const char *))(*this + 864))(this, "scores", "PANEL_SCOREBOARD");
  (*(void (__thiscall **)(int *, int))(v2 + 872))(this, v3);
  v4 = *this;
  v5 = (*(int (__thiscall **)(int *, const char *, const char *))(*this + 864))(this, "info", "PANEL_INFO");
  (*(void (__thiscall **)(int *, int))(v4 + 872))(this, v5);
  v6 = *this;
  v7 = (*(int (__thiscall **)(int *, const char *, const char *))(*this + 864))(this, "specgui", "PANEL_SPECGUI");
  (*(void (__thiscall **)(int *, int))(v6 + 872))(this, v7);
  v8 = *this;
  v9 = (*(int (__thiscall **)(int *, const char *, const char *))(*this + 864))(this, "specmenu", "PANEL_SPECMENU");
  (*(void (__thiscall **)(int *, int))(v8 + 872))(this, v9);
  v10 = *this;
  v11 = (*(int (__thiscall **)(int *, const char *, const char *))(*this + 864))(
          this,
          "nav_progress",
          "PANEL_NAV_PROGRESS");
  return (*(int (__thiscall **)(int *, int))(v10 + 872))(this, v11);
}
