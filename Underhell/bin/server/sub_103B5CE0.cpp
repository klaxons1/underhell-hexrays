void __thiscall sub_103B5CE0(char *this, int a2, int a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  BOOL v7; // ecx
  int v8; // esi
  int v9; // eax
  float v10; // [esp+8h] [ebp-78h]
  int v11; // [esp+14h] [ebp-6Ch]
  _BYTE v12[44]; // [esp+24h] [ebp-5Ch] BYREF
  int v13; // [esp+50h] [ebp-30h]
  int v14[3]; // [esp+74h] [ebp-Ch] BYREF

  v3 = a3;
  if ( (this[2716] & 1) == 0 )
  {
    v5 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a3 + 4 * (a2 == 0) + 104) + 632))(1.0);
    if ( v5 )
    {
      v11 = v5;
      v6 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 1868))(this);
      sub_100780E0(v6, v11);
      *((_DWORD *)this + 679) |= 1u;
      sub_10023CB0(this, 17);
    }
  }
  v7 = a2 == 0;
  v8 = *(_DWORD *)(v3 + 4 * v7 + 104);
  if ( v8 && (unsigned __int8)sub_103D2100(*(_DWORD *)(v3 + 4 * v7 + 104)) )
  {
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 28) + 4))(*(_DWORD *)(v3 + 28), v14);
    a3 = *((_DWORD *)this + 54) / 3 + 1;
    v10 = (float)a3;
    sub_102487B0((int)v12, v8, v8, &flt_106F1CA8, (float *)v14, v10, 2112, 0, 0);
    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 632))(v8, 1.0);
    if ( v9 )
      v13 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    a3 = 0;
    sub_100C0ED0((_DWORD *)this + 208, &a3);
    sub_101BB4B0(1.0, (int)this, (int)v12, v3, a2);
  }
  else
  {
    sub_100CD0F0((float *)this, a2, *(float *)&v3);
  }
}
