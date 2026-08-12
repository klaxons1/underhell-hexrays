int __thiscall sub_101B9A40(_DWORD *this, int a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // ebx
  int v7; // ecx
  _DWORD *v8; // edi
  int result; // eax
  int v10; // esi
  int v11; // eax
  unsigned __int16 v12; // ax
  const char *v13; // eax
  const char *v14; // eax
  int v15; // eax
  const char *v16; // [esp-8h] [ebp-20h]
  int v17; // [esp-4h] [ebp-1Ch]
  int v18; // [esp-4h] [ebp-1Ch]
  int v19; // [esp+0h] [ebp-18h]
  float v20; // [esp+10h] [ebp-8h]
  _DWORD *v21; // [esp+14h] [ebp-4h]
  int v22; // [esp+28h] [ebp+10h]
  int v23; // [esp+2Ch] [ebp+14h]

  ++this[86];
  v6 = this - 1;
  v7 = this[86];
  v8 = a4;
  v21 = a4;
  v22 = (int)a5;
  if ( byte_10637A80 )
  {
    v6[87] = v7 - 1;
    return 1;
  }
  if ( v8 <= a5 )
  {
    v10 = a2;
  }
  else
  {
    v10 = a3;
    v21 = a5;
    v11 = a2;
    v22 = (int)v8;
    v8 = a5;
    a2 = a3;
    a3 = v11;
  }
  if ( v8 == (_DWORD *)v22 && ((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 76))(v10) & 8) != 0 )
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 84))(a3);
    v17 = (*(unsigned __int16 (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 84))(v10, v12);
    v13 = sub_100D6390(v8);
    v14 = (const char *)(*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v10 + 296))(v10, v13, v17);
    DevMsg(2, "Solving ragdoll self penetration! %s (%s) (%d v %d)\n", v14, v16, v18, v19);
    v15 = sub_101CB4A0(v8);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v15 + 8) + 24))(*(_DWORD *)(v15 + 8), v10, a3);
    --v6[87];
    return 0;
  }
  v23 = sub_101B98B0(v6, (int)v8, v22);
  v20 = *(float *)(dword_106B31C8 + 12) - *(float *)(v23 + 8);
  if ( sub_100D7680((int)v8) )
  {
    if ( sub_101B6BB0((_BYTE *)v22, a3) )
    {
LABEL_14:
      *(_DWORD *)(v23 + 16) = 2;
      goto LABEL_15;
    }
    v8 = v21;
    v10 = a2;
  }
  if ( !sub_100D7680(v22) )
    goto LABEL_16;
  if ( sub_101B6BB0(v8, v10) )
    goto LABEL_14;
LABEL_15:
  v10 = a2;
  v8 = v21;
LABEL_16:
  if ( ((unsigned int)(v8[105] - 1) <= 2 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3)
     || (unsigned int)(*(_DWORD *)(v22 + 420) - 1) <= 2
     && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10))
    && v20 > 0.5 )
  {
    *(_DWORD *)(v23 + 16) = 3;
  }
  if ( v20 <= 3.0 )
    goto LABEL_31;
  if ( *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) && v8 != (_DWORD *)v22 )
  {
    sub_101B6B60((int)v8, *(float *)(dword_106BA0BC + 44));
    sub_101B6B60(v22, *(float *)(dword_106BA0BC + 44));
    v10 = a2;
  }
  *(float *)(v23 + 8) = *(float *)(dword_106B31C8 + 12);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v8 + 320))(v8)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 320))(v22)
    || (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 280))(v10)
    || (result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 280))(a3)) != 0 )
  {
LABEL_31:
    --v6[87];
    return 1;
  }
  else
  {
    *(_DWORD *)(v23 + 16) = 1;
    --v6[87];
  }
  return result;
}
