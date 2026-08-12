int __thiscall sub_10263340(int this, int a2, int a3)
{
  int v3; // ebp
  int v5; // eax
  int v6; // edx
  int (__thiscall ***v7)(void *, int, int); // ebx
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  bool v17; // cc
  int v19; // [esp+10h] [ebp-18h] BYREF
  int (__thiscall ***v20)(void *, int, int); // [esp+14h] [ebp-14h]
  int v21; // [esp+18h] [ebp-10h] BYREF
  int v22; // [esp+1Ch] [ebp-Ch] BYREF
  char v23[4]; // [esp+20h] [ebp-8h] BYREF
  char v24[4]; // [esp+24h] [ebp-4h] BYREF

  v3 = a2;
  v5 = *(_DWORD *)(this + 260);
  v6 = *(_DWORD *)(this + 216);
  *(_DWORD *)(this + 280) = a2;
  v8 = v6 + 72 * *(unsigned __int8 *)(v5 + v3);
  v20 = *(int (__thiscall ****)(void *, int, int))v8;
  v7 = v20;
  sub_102361D0(v20, (int)&a2, (int)&v22);
  v9 = a3 + a2;
  a2 = v9;
  if ( v9 < *(_DWORD *)(v8 + 4) )
  {
    v9 = *(_DWORD *)(v8 + 4);
    a2 = v9;
  }
  v10 = *(_DWORD *)(v8 + 8);
  if ( v9 > v10 )
    a2 = v10;
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v19, (int)v23);
  sub_10236170(v7, (int)&v21, (int)v24);
  v11 = v3 + 1;
  v12 = 0;
  if ( v3 + 1 < *(_DWORD *)(this + 272) )
  {
    do
    {
      v12 += *(_DWORD *)(*(_DWORD *)(this + 216) + 72 * *(unsigned __int8 *)(v11 + *(_DWORD *)(this + 260)) + 4);
      ++v11;
    }
    while ( v11 < *(_DWORD *)(this + 272) );
    v7 = v20;
  }
  v13 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 368));
  v14 = -2 - v12 - v21 - v13;
  v15 = a2;
  v16 = v14 + v19;
  v17 = a2 <= v14 + v19;
  v19 += v14;
  if ( !v17 )
  {
    v15 = v16;
    a2 = v16;
  }
  sub_102361A0(v7, v15, v22);
  (*v7)[61](v7, 0, 0);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
}
