int __thiscall sub_1025A440(char *this, const unsigned __int16 *a2)
{
  int *v3; // edi
  int (__thiscall *v4)(char *, int *); // edx
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned __int16 *v8; // ebp
  int v9; // ebx
  int v10; // ecx
  void (__thiscall *v11)(char *); // eax
  _DWORD **v12; // edi
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int (__thiscall *v16)(char *, _DWORD, _DWORD); // eax
  int v18; // [esp+10h] [ebp-24h] BYREF
  _DWORD v19[2]; // [esp+14h] [ebp-20h] BYREF
  char v20; // [esp+1Ch] [ebp-18h]
  __int16 v21; // [esp+1Eh] [ebp-16h]
  float v22; // [esp+20h] [ebp-14h]
  float v23; // [esp+24h] [ebp-10h]
  int v24; // [esp+30h] [ebp-4h]

  v3 = (int *)(this + 264);
  *((_DWORD *)this + 69) = 0;
  v4 = *(int (__thiscall **)(char *, int *))(*(_DWORD *)this + 228);
  v21 = -1;
  v5 = (int *)v4(this, &v18);
  v6 = v3[3];
  v23 = -1.0;
  v7 = *v5;
  v22 = 0.0;
  v19[0] = v7;
  v19[1] = 0;
  v24 = 0;
  v20 = 0;
  sub_10258BB0(v3, v6, (int)v19);
  v8 = (unsigned __int16 *)a2;
  *((_DWORD *)this + 59) = 0;
  if ( a2 )
  {
    v9 = wcslen(a2) + 1;
    sub_10254DF0((int *)this + 56, v9);
    if ( v9 > 0 )
    {
      do
      {
        sub_10255420((int *)this + 56, *((_DWORD *)this + 59), v8++);
        --v9;
      }
      while ( v9 );
    }
  }
  v10 = *((_DWORD *)this + 53);
  *((_DWORD *)this + 74) = 0;
  this[292] = 1;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 768))(v10, 0);
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 16))(this);
  v11 = *(void (__thiscall **)(char *))(*(_DWORD *)this + 16);
  *((_DWORD *)this + 76) = -1;
  v11(this);
  v12 = (_DWORD **)(this + 244);
  *((_DWORD *)this + 64) = 0;
  v13 = *((_DWORD *)this + 62);
  if ( v13 < 1 )
    sub_1010AFF0((_DWORD *)this + 61, 1 - v13);
  ++*((_DWORD *)this + 64);
  v14 = *v12;
  v15 = *((_DWORD *)this + 64) - 1;
  *((_DWORD *)this + 65) = *((_DWORD *)this + 61);
  if ( v15 > 0 )
    memcpy(v14 + 1, v14, 4 * v15);
  if ( *v12 )
    **v12 = 999999;
  v16 = *(int (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)this + 244);
  *((_DWORD *)this + 72) = 0;
  this[284] = 1;
  return v16(this, 0, 0);
}
