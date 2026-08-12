int *__thiscall sub_10108C10(void *this, int *a2, int a3, int a4)
{
  float *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // eax
  int *result; // eax
  int v16; // [esp+2Ch] [ebp+8h]
  int v17; // [esp+2Ch] [ebp+8h]
  int *v18; // [esp+30h] [ebp+Ch]

  sub_101079B0();
  a2[1013] = a3;
  sub_1000E090(a3);
  v7 = (float *)off_103DC81C;
  dword_10404B5C = (int)a2;
  v18 = a2 + 1064;
  *((float *)off_103DC81C + 3) = (double)a2[1064] * *((float *)off_103DC81C + 7);
  *((float *)off_103DC81C + 4) = v7[7];
  (*(void (__thiscall **)(int *, int *))(*off_103ED0B4 + 8))(off_103ED0B4, a2);
  v8 = *(_DWORD *)(a3 + 44);
  if ( v8 )
  {
    v9 = sub_10036480(v8);
    v10 = __RTDynamicCast(
            v9,
            0,
            (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
            (int)&C_BaseCombatWeapon `RTTI Type Descriptor',
            0);
    if ( v10 )
    {
      v16 = *a2;
      v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 1168))(v10, *(_DWORD *)(a3 + 48));
      (*(void (__thiscall **)(int *, int))(v16 + 944))(a2, v11);
    }
  }
  v12 = a2[1032];
  if ( v12 != -1
    && *((_DWORD *)off_103DCD74 + 4 * (a2[1032] & 0xFFF) + 2) == v12 >> 12
    && (v13 = *((_DWORD *)off_103DCD74 + 4 * (a2[1032] & 0xFFF) + 1)) != 0 )
  {
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 332))(v13);
  }
  else
  {
    v17 = 0;
  }
  if ( *(_BYTE *)(a3 + 40) && (!v17 || sub_10012EB0(a2)) )
    a2[1054] = *(unsigned __int8 *)(a3 + 40);
  sub_10011EC0(a2, *(_DWORD *)(a3 + 36));
  (*(void (__thiscall **)(int *, int))(*a2 + 1064))(a2, a3 + 12);
  if ( sub_100F83B0(a2, 0) )
    (*(void (__thiscall **)(int *))(*a2 + 904))(a2);
  v14 = sub_1000F2D0(a2, 0);
  if ( v14 > 0 && v14 <= *v18 )
  {
    sub_10011260(a2, -1.0, 0);
    (*(void (__thiscall **)(int *))(*a2 + 464))(a2);
  }
  (*(void (__thiscall **)(void *, int *, int, int, void *))(*(_DWORD *)this + 72))(this, a2, a3, a4, off_103ED0F8);
  if ( v17 )
    (*(void (__thiscall **)(int, int *, void *))(*(_DWORD *)v17 + 20))(v17, a2, off_103ED0F8);
  else
    (*(void (__thiscall **)(int *, int *, void *))(*off_103ED0B4 + 4))(off_103ED0B4, a2, off_103ED0F8);
  (*(void (__thiscall **)(void *, int *, int, void *))(*(_DWORD *)this + 76))(this, a2, a3, off_103ED0F8);
  (*(void (__thiscall **)(int *))(*a2 + 908))(a2);
  (*(void (__thiscall **)(int *, int *))(*off_103ED0B4 + 12))(off_103ED0B4, a2);
  a2[1013] = 0;
  sub_1000E090(0);
  result = v18;
  dword_10404B5C = 0;
  ++*v18;
  return result;
}
