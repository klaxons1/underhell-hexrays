_DWORD *__thiscall sub_1024E430(_DWORD *this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  char *v4; // eax
  _DWORD *v5; // eax
  char *v6; // eax
  bool v7; // zf
  char *v8; // eax
  _DWORD *v9; // eax
  const char *v10; // esi
  float *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  char *v18; // esi
  const char *v19; // esi
  const char *v20; // esi
  float v21[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (char *)this[245];
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
  {
    this[242] = v3;
    v4 = (char *)this[246];
    if ( !v4 )
      v4 = (char *)String;
    v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
    if ( v5 )
    {
      this[243] = v5;
      v6 = (char *)this[247];
      if ( !v6 )
        v6 = (char *)String;
      v7 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, 0, 0, 0) == 0;
      v8 = (char *)this[247];
      if ( v7 )
      {
        if ( !v8 )
          v8 = (char *)String;
        Warning("Can't find train for track change! %s\n", v8);
        v18 = (char *)this[247];
        if ( !v18 )
          v18 = (char *)String;
        return sub_1012BF20(&dword_1069E3E0, 0, v18, 0, 0, 0, 0);
      }
      else
      {
        if ( !v8 )
          v8 = (char *)String;
        v9 = sub_1012BF20(&dword_1069E3E0, 0, v8, 0, 0, 0, 0);
        this[244] = v9;
        if ( v9 )
        {
          v12 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
          v21[0] = *v12;
          v21[1] = v12[1];
          v13 = this[243];
          v21[2] = v12[2];
          v14 = sub_101AD320(v13, v21);
          v15 = this[242];
          this[243] = v14;
          v16 = sub_101AD320(v15, v21);
          v17 = this[200];
          this[242] = v16;
          (*(void (__thiscall **)(_DWORD *, int))(*this + 744))(this, v17);
          return (_DWORD *)sub_100EC3F0(this, 0, 0.0, 0);
        }
        else
        {
          v10 = (const char *)this[247];
          if ( !v10 )
            v10 = String;
          return (_DWORD *)Warning("Can't find train for track change! %s\n", v10);
        }
      }
    }
    else
    {
      v19 = (const char *)this[246];
      if ( !v19 )
        v19 = String;
      return (_DWORD *)Warning("Can't find bottom track for track change! %s\n", v19);
    }
  }
  else
  {
    v20 = (const char *)this[245];
    if ( !v20 )
      v20 = String;
    return (_DWORD *)Warning("Can't find top track for track change! %s\n", v20);
  }
}
