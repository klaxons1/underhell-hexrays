void __thiscall sub_10375340(int this)
{
  int v1; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  int v8; // edi
  float *v9; // eax
  double v10; // st7
  void (__thiscall *v11)(int, _BYTE *, float *, _DWORD); // eax
  _BYTE v12[12]; // [esp+20h] [ebp-28h] BYREF
  _BYTE v13[12]; // [esp+2Ch] [ebp-1Ch] BYREF
  float v14[3]; // [esp+38h] [ebp-10h] BYREF
  int v15; // [esp+44h] [ebp-4h]

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
    v4 = *(_DWORD *)(this + 1100);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  if ( v4 )
  {
    v5 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v6 = *(_DWORD **)(this + 1100);
    if ( v6 && *v6 )
      v7 = *(_DWORD **)(this + 1100);
    else
      v7 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
    if ( sub_10245FE0(v7) )
    {
      *(float *)&v15 = sub_100BD360((float *)this);
      v8 = *(_DWORD *)(this + 2372);
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
        || *(_DWORD *)(this + 2324) == 4
        || v8 == dword_106E84C4
        || v8 == dword_106E84C0 )
      {
        sub_103750C0(this, v15);
      }
      else
      {
        v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 968))(this, v12);
        v14[0] = *v9;
        v14[1] = v9[1];
        v10 = v9[2];
        v11 = *(void (__thiscall **)(int, _BYTE *, float *, _DWORD))(*(_DWORD *)this + 2096);
        v14[2] = v10;
        v11(this, v13, v14, 0);
        sub_10374D60(this, (int)v13, v15);
      }
    }
  }
}
