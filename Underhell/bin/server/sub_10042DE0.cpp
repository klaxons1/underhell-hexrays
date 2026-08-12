char __usercall sub_10042DE0@<al>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // edi
  float *v6; // eax
  float *v7; // eax
  int (__thiscall *v8)(_DWORD *); // edx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  _BYTE v14[12]; // [esp+4h] [ebp-24h] BYREF
  float v15[3]; // [esp+10h] [ebp-18h] BYREF
  float v16; // [esp+1Ch] [ebp-Ch] BYREF
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+24h] [ebp-4h]

  if ( sub_1007E000(a1[647]) != 7 || !(*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
    return 1;
  v3 = a1[722];
  if ( v3 == -1 || off_1061BE18[4 * (a1[722] & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (a1[722] & 0xFFF) + 1];
  v5 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 2068))(a1, v4);
  v6 = (float *)sub_1007DD50(a1[647], a2);
  v16 = *v6;
  v17 = v6[1];
  v18 = v6[2];
  v18 = sub_1008D510(&v16);
  v7 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*a1 + 1796))(a1, v14, v5);
  v15[0] = *v7 + v16;
  v15[1] = v7[1] + v17;
  v8 = *(int (__thiscall **)(_DWORD *))(*a1 + 368);
  v15[2] = v7[2] + v18;
  v9 = v8(a1);
  v10 = *a1;
  v11 = (*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v9 + 504))(v9, v14, v15);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(v10 + 1944))(a1, v11) )
    return 1;
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 1312))(a1, 25);
  return 0;
}
