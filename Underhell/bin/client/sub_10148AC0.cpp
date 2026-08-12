int __thiscall sub_10148AC0(int this, char a2, void *a3, int a4, int a5)
{
  int v5; // edi
  void (__thiscall *v6)(int); // edx
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  volatile signed __int32 *v11; // edi
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  volatile signed __int32 *v14; // esi
  int v15; // eax
  volatile signed __int32 *v16; // esi
  int v18; // eax
  volatile signed __int32 *v19; // esi
  _DWORD v20[2]; // [esp+Ch] [ebp-3Ch] BYREF
  char v21; // [esp+14h] [ebp-34h]
  float v22[6]; // [esp+24h] [ebp-24h] BYREF
  int v23; // [esp+3Ch] [ebp-Ch]
  _DWORD *v24; // [esp+40h] [ebp-8h]
  char v25; // [esp+47h] [ebp-1h] BYREF

  v5 = dword_1047CA8C;
  v6 = *(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100);
  v23 = dword_1047CA8C;
  v6(dword_1047CA8C);
  (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_10413168 + 40))(dword_10413168, (int)a3 + 44, v20);
  sub_10143510((float *)this, (int)v20, &v25);
  if ( (v25 & 1) != 0 )
  {
    if ( sub_10054900((float *)a3, v22) )
    {
      v8 = (_DWORD *)sub_100DDA40(200);
      if ( v8 )
      {
        v9 = sub_10144330(v8, this);
        v24 = v9;
      }
      else
      {
        v24 = 0;
        v9 = 0;
      }
      sub_10147290((int)v9, a3, 3, a2, (int)v20, &v25, (int)v22);
      (**(void (__thiscall ***)(int, _DWORD *))(this + 556))(this + 556, v9);
      v10 = (_DWORD *)sub_100DDA40(200);
      if ( v10 )
        v11 = sub_10144390(v10, this);
      else
        v11 = 0;
      sub_10147290((int)v11, a3, 3, a2, (int)v20, &v25, (int)v22);
      (**(void (__thiscall ***)(int, volatile signed __int32 *))(this + 556))(this + 556, v11);
      if ( v11
        && !_InterlockedDecrement(v11 + 1)
        && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v11 + 4))(v11) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *, int))v11)(v11, 1);
      }
      v12 = v24;
      if ( v24 && !_InterlockedDecrement(v24 + 1) && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v12 + 4))(v12) )
        (*(void (__thiscall **)(_DWORD *, int))*v12)(v12, 1);
      v5 = v23;
    }
    v13 = (_DWORD *)sub_100DDA40(180);
    if ( v13 )
      v14 = sub_101442D0(v13, this);
    else
      v14 = 0;
    sub_10146F40(v14, a3, a4, a2, (int)v20, &v25, a5);
    (**(void (__thiscall ***)(int, volatile signed __int32 *))(this + 556))(this + 556, v14);
    if ( v14 && !_InterlockedDecrement(v14 + 1) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v14 + 4))(v14) )
        (**(void (__thiscall ***)(volatile signed __int32 *, int))v14)(v14, 1);
    }
  }
  else
  {
    if ( !*(_DWORD *)(dword_1043C624 + 48) )
      v20[1] = -1;
    if ( v21 )
    {
      v18 = sub_100DDA40(512);
      if ( v18 )
        v19 = (volatile signed __int32 *)sub_10148340(v18, this);
      else
        v19 = 0;
      sub_10147140((int)v19, a3, a2, v20, &v25);
      (**(void (__thiscall ***)(int, volatile signed __int32 *))(this + 556))(this + 556, v19);
      if ( v19
        && !_InterlockedDecrement(v19 + 1)
        && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v19 + 4))(v19) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *, int))v19)(v19, 1);
      }
    }
    else
    {
      v15 = sub_100DDA40(824);
      if ( v15 )
        v16 = (volatile signed __int32 *)sub_10148190(v15, this);
      else
        v16 = 0;
      sub_10147020((int)v16, a3, a2, v20, &v25);
      (**(void (__thiscall ***)(int, volatile signed __int32 *))(this + 556))(this + 556, v16);
      if ( v16
        && !_InterlockedDecrement(v16 + 1)
        && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v16 + 4))(v16) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *, int))v16)(v16, 1);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
      }
    }
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
}
