_DWORD *__thiscall sub_101812A0(char *this, const char *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  _DWORD *v16; // eax
  int v17; // edx
  _DWORD *v18; // eax

  v3 = 0;
  if ( !strcmp("scores", a2) )
  {
    v4 = sub_100DDA40(480);
    if ( v4 )
    {
      v5 = this ? (int)(this + 252) : 0;
      v6 = sub_10184280(v4, v5);
      if ( v6 )
      {
        v3 = v6 + 252;
        goto LABEL_39;
      }
    }
    goto LABEL_38;
  }
  if ( !strcmp("info", a2) )
  {
    v7 = sub_100DDA40(3020);
    if ( !v7 )
      goto LABEL_38;
    if ( this )
      v8 = sub_1018B410(v7, (int)(this + 252));
    else
      v8 = sub_1018B410(v7, 0);
  }
  else if ( !strcmp("team", a2) )
  {
    v9 = sub_100DDA40(716);
    if ( !v9 )
      goto LABEL_38;
    if ( this )
      v8 = sub_1018A6F0(v9, (int)(this + 252));
    else
      v8 = sub_1018A6F0(v9, 0);
  }
  else if ( !strcmp("specmenu", a2) )
  {
    v10 = sub_100DDA40(472);
    if ( !v10 )
      goto LABEL_38;
    if ( this )
      v8 = sub_10189F00(v10, (int)(this + 252));
    else
      v8 = sub_10189F00(v10, 0);
  }
  else
  {
    if ( !sub_10001000("specgui", a2) )
    {
      v11 = sub_100DDA40(284);
      if ( v11 )
      {
        v12 = this ? (int)(this + 252) : 0;
        v13 = sub_101897F0(v11, v12);
        if ( v13 )
        {
          v3 = v13 + 252;
          goto LABEL_39;
        }
      }
      goto LABEL_38;
    }
    if ( sub_10001000("nav_progress", a2) )
      goto LABEL_39;
    v14 = sub_100DDA40(468);
    if ( !v14 )
      goto LABEL_38;
    if ( this )
      v15 = (int)(this + 252);
    else
      v15 = 0;
    v8 = sub_101886C0(v14, v15);
  }
  if ( v8 )
  {
    v3 = v8 + 428;
    goto LABEL_39;
  }
LABEL_38:
  v3 = 0;
LABEL_39:
  if ( strcmp("commentary_modelviewer", a2) )
    return (_DWORD *)v3;
  v16 = (_DWORD *)sub_100DDA40(480);
  if ( v16 && (!this ? (v17 = 0) : (v17 = (int)(this + 252)), (v18 = sub_100925E0(v16, v17)) != 0) )
    return v18 + 107;
  else
    return 0;
}
