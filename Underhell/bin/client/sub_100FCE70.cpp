void __thiscall sub_100FCE70(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int16 v8; // cx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int *v14; // eax
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // ecx
  int v19; // [esp+8h] [ebp-4h]
  char v20; // [esp+23h] [ebp+17h]

  if ( a5 == 1 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
    v5 = *(_DWORD *)(a3 + 16);
    v19 = -1;
    v20 = 0;
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, v5);
      v19 = v6;
      if ( v6 == -1 )
        goto LABEL_27;
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, v6);
      if ( !v7 )
        goto LABEL_27;
      v8 = *(_WORD *)v7;
      if ( (*(_WORD *)v7 & 0x7FFF) == 0 )
        goto LABEL_27;
      v9 = *(_DWORD *)(v7 + 4);
      if ( !v9 )
        goto LABEL_27;
      v10 = *(_DWORD *)(a3 + 48);
      if ( v10 >= (v8 & 0x7FFF) )
        goto LABEL_27;
      v11 = *(_DWORD *)(v9 + 4 * v10);
      goto LABEL_18;
    }
    if ( *(float *)(a3 + 20) != flt_10459240
      || *(float *)(a3 + 24) != *(float *)&qword_10459244
      || *(float *)(a3 + 28) != *((float *)&qword_10459244 + 1)
      || sub_1000E340((float *)(a3 + 32), &flt_10459240) )
    {
      v11 = sub_10101720(a3 + 20, a3 + 32);
      v20 = 1;
LABEL_18:
      if ( v11 )
      {
        v13 = *(_DWORD **)(a4 + 52);
        if ( *v13 )
        {
          DevMsg(
            "Physics object pointer unexpectedly non-null before restore. Should be creating physics object in CreatePhysics()?\n");
        }
        else
        {
          sub_100FCB50(a2, (_DWORD *)a3, (int)v13, v11);
          v14 = *(int **)(a4 + 52);
          if ( *v14 )
          {
            v15 = *v14;
            v16 = this[1];
            v17 = this + 1;
            if ( v20 )
              (*(void (__thiscall **)(_DWORD *, int, int))(v16 + 4))(v17, v15, v11);
            else
              (*(void (__thiscall **)(_DWORD *, int, int))(v16 + 8))(v17, v15, v19);
          }
          else
          {
            DevMsg("Failed to restore physics object\n");
          }
        }
        goto LABEL_23;
      }
LABEL_27:
      DevMsg("Failed to reestablish collision model for object\n");
LABEL_23:
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
      return;
    }
    if ( 0.0 == *(float *)(a3 + 44) )
      goto LABEL_27;
    v12 = *(_DWORD **)(a4 + 52);
    if ( !*v12 )
      sub_100FCB50(a2, (_DWORD *)a3, (int)v12, 0);
  }
  else
  {
    DevMsg("Don't know how to reconsitite models for physobj array \n");
  }
}
