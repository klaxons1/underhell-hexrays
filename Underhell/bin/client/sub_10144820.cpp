// positive sp value has been detected, the output may be wrong!
void __usercall sub_10144820(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  int v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v11; // [esp+48h] [ebp-18h]
  int v12; // [esp+48h] [ebp-18h]
  int v13; // [esp+4Ch] [ebp-14h]
  int v14; // [esp+4Ch] [ebp-14h]
  int v15; // [esp+50h] [ebp-10h] BYREF
  int v16; // [esp+54h] [ebp-Ch] BYREF
  int v17; // [esp+58h] [ebp-8h] BYREF
  int v18; // [esp+5Ch] [ebp-4h] BYREF
  int savedregs; // [esp+60h] [ebp+0h]

  v3 = *(_DWORD *)(a1 + 292);
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a3);
    v11 = v4;
    if ( v4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    (*(void (__thiscall **)(int, int *, int *, int *))(*(_DWORD *)v4 + 156))(v4, &v15, &v16, &v17);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 100))(v3, 1) )
    {
      sub_10053CE0(v3, a2, v3, v15, v16, v17, v18);
    }
    else if ( (*(unsigned __int8 (__thiscall **)(int, int, int *))(*(_DWORD *)v3 + 96))(v3, 1, &v18) )
    {
      sub_100ECDC0(a2, v4);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v6 = v5;
      if ( v5 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      v7 = sub_10116510();
      v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, a2);
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 16))(v7);
      savedregs = 1;
      v18 = 1;
      v17 = 0;
      v16 = v8;
      v9 = *(_DWORD *)v6;
      v15 = v13;
      *(float *)&v14 = (float)(v8 - 1);
      *(float *)&v12 = (float)v14;
      (*(void (__thiscall **)(int, int, int, int, _DWORD, int, _DWORD, _DWORD))(v9 + 412))(
        v6,
        v3,
        v15,
        v8,
        0,
        1,
        0.0,
        0.0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
      v4 = v12;
    }
    else
    {
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int))(*(_DWORD *)v4 + 412))(
        v4,
        v3,
        v15,
        v16,
        v17,
        v18,
        0.0,
        0.0,
        1.0,
        1.0,
        1,
        1,
        0,
        1);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
}
