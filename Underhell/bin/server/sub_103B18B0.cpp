bool __userpurge sub_103B18B0@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4, int a5)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  float *v11; // eax
  int v12; // eax
  int v13; // eax
  float *v14; // ebx
  float *v15; // eax
  int v16; // eax
  int v18; // [esp-4h] [ebp-2Ch]
  float v19[3]; // [esp+0h] [ebp-28h] BYREF
  float v20[3]; // [esp+Ch] [ebp-1Ch] BYREF
  float v21; // [esp+18h] [ebp-10h]
  float v22; // [esp+1Ch] [ebp-Ch]
  float v23; // [esp+20h] [ebp-8h]
  int v24; // [esp+24h] [ebp-4h]
  float v25; // [esp+34h] [ebp+Ch]
  float v26; // [esp+34h] [ebp+Ch]

  v24 = a1;
  if ( (dword_1069042C & 1) != 0 )
    return 0;
  if ( !a5 || *(float *)(a1 + 16) > (double)*(float *)(dword_106B31C8 + 12) )
    return 0;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 24))(a4);
  v8 = __RTDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
         (int)&CNPC_Strider `RTTI Type Descriptor',
         0);
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)a5 + 320))(a5, a3, a2)
    && sub_100B8E40((float *)(v8 + 3936)) )
  {
    return 0;
  }
  if ( *(_BYTE *)(v24 + 76) )
    goto LABEL_17;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 24))(a4);
  if ( a5 != (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 368))(v9) )
    return 0;
  v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 24))(a4);
  if ( sub_10023D10(v10, 10)
    || (v25 = *(float *)v8,
        v18 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 576))(a5, 0),
        v11 = sub_103AFA80((float *)v8, v19),
        (*(unsigned __int8 (__thiscall **)(int, float *, int))(LODWORD(v25) + 2024))(v8, v11, v18)) )
  {
LABEL_17:
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 24))(a4);
    v14 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v13 + 504))(v13, v19);
    v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 576))(a5);
    v21 = *v15 - *v14;
    v22 = v15[1] - v14[1];
    v23 = 0.0;
    off_10689714();
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 24))(a4);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v16 + 920))(v16, v20);
    return v21 * v20[0] + v20[1] * v22 + v20[2] * v23 > 0.707;
  }
  if ( !*(_BYTE *)(v8 + 3912) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a5 + 320))(a5) )
    return 0;
  if ( sub_100B8E40((float *)(v8 + 3936)) )
    return 0;
  v26 = *(float *)(dword_106B31C8 + 12);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1868))(v8);
  return v26 - sub_10077680(v12, a5, 1) <= 2.0;
}
