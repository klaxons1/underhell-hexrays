char __thiscall sub_1000C1B0(_WORD *this, int a2)
{
  void (*v3)(void); // edx
  double v4; // st7
  bool v5; // zf
  int v6; // edi
  _DWORD *v7; // eax
  unsigned int v8; // eax
  float **v9; // ecx
  float *v10; // edi
  float v12; // [esp+4h] [ebp-2Ch]
  int v13[4]; // [esp+18h] [ebp-18h] BYREF
  int v14; // [esp+28h] [ebp-8h]
  float v15; // [esp+2Ch] [ebp-4h]

  v3 = *(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100);
  v14 = dword_1047CA8C;
  v3();
  this[992] = 0;
  sub_10011170((int)v13, 0, 0, 0, -1, 0.0, 0);
  (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 852))(this, 173);
  v4 = 0.0;
  v5 = *((_DWORD *)this + 500) == 173;
  v15 = 0.0;
  if ( v5 )
  {
    v6 = *((_DWORD *)this + 452);
    if ( !*((_DWORD *)this + 485) && (*(int (__thiscall **)(_WORD *))(*((_DWORD *)this + 1) + 36))(this + 2) )
      sub_10026520(this);
    v7 = (_DWORD *)*((_DWORD *)this + 485);
    if ( !v7 || !*v7 )
      v7 = 0;
    v4 = sub_10025700(v7, v6);
    v15 = v4;
  }
  v8 = *((_DWORD *)this + 490);
  if ( v8 != -1 )
  {
    v9 = (float **)((char *)off_103DCD74 + 16 * (*((_DWORD *)this + 490) & 0xFFF) + 4);
    if ( *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 490) & 0xFFF) + 2) == v8 >> 12 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v10 + 512))(*v9) )
        {
          v4 = v15;
          v10[754] = *((float *)off_103DC81C + 3) + v15;
        }
        else
        {
          v4 = v15;
        }
      }
    }
  }
  if ( 0.0 == v4 )
  {
    (*(void (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)this + 912))(this, 0);
  }
  else
  {
    v12 = v4 + *((float *)off_103DC81C + 3);
    sub_10011170((int)v13, (int)sub_1000B2A0, 0, 0, 0, v12, (int)"BaseCombatWeapon_HideThink");
  }
  if ( 0.0 != *((float *)this + 528) && *((float *)this + 528) > (double)*((float *)off_103DC81C + 3) )
  {
    if ( *((_BYTE *)this + 2104) )
      (*(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 832))(this);
    if ( *((_BYTE *)this + 2105) )
      (*(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 844))(this);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
  return 1;
}
