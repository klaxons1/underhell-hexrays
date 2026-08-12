char __userpurge sub_103C70B0@<al>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5, char a6)
{
  int *v7; // eax
  int v8; // eax
  float *v9; // edi
  int (__thiscall *v10)(int *); // eax
  int v11; // eax
  float *v12; // eax
  _BYTE v14[12]; // [esp+10h] [ebp-3Ch] BYREF
  int v15[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v16[3]; // [esp+28h] [ebp-24h] BYREF
  int v17[3]; // [esp+34h] [ebp-18h] BYREF
  float v18; // [esp+40h] [ebp-Ch]
  float v19; // [esp+44h] [ebp-8h]
  float v20; // [esp+48h] [ebp-4h]
  int savedregs; // [esp+4Ch] [ebp+0h] BYREF

  sub_10260A10(a2, a3, a1, 0.5, (float *)v15);
  v7 = (int *)(*(int (__thiscall **)(int *))(*a1 + 368))(a1);
  sub_10260A10(a2, a3, v7, 0.5, (float *)v17);
  v8 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
  v9 = (float *)v8;
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  v10 = *(int (__thiscall **)(int *))(*a1 + 368);
  v18 = *(float *)v17 - v9[145];
  v19 = *(float *)&v17[1] - v9[146];
  v20 = *(float *)&v17[2] - v9[147];
  v11 = v10(a1);
  v12 = (float *)(*(int (__thiscall **)(int, _BYTE *, int *, int))(*(_DWORD *)v11 + 520))(v11, v14, v15, 1);
  v16[0] = *v12 + v18;
  v16[1] = v12[1] + v19;
  v16[2] = v12[2] + v20;
  return sub_1002BF70((char *)a1, (int)&savedregs, (int)v9, (int)a1, (float *)v15, (int)v16, a6);
}
