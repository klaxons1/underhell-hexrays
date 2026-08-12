void __thiscall sub_101DA1C0(void *this, _DWORD *a2, int a3, int *a4, int a5)
{
  _DWORD *v5; // edi
  bool v6; // bl
  int *v7; // esi
  int (__thiscall *v8)(_DWORD *); // eax
  int v9; // ecx
  int v10; // esi
  int v11; // ebx
  int (__thiscall *v12)(int); // eax
  int v13; // eax
  float *v14; // eax
  const char *v15; // edi
  _DWORD v16[14]; // [esp+4h] [ebp-3Ch] BYREF
  int v17; // [esp+3Ch] [ebp-4h]

  v5 = a2;
  v17 = (int)this;
  if ( a2 )
  {
    v6 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 176))(a2) == 0;
    memset(v16, 0, 0x34u);
    v7 = a4;
    v8 = *(int (__thiscall **)(_DWORD *))(*v5 + 8);
    v16[13] = a4;
    v16[1] = *(_DWORD *)v8(v5);
    v16[0] = a5;
    if ( v6 )
      v16[3] = 0;
    else
      v16[3] = *(unsigned __int16 *)(a3 + 16);
    v9 = *sub_10162BE0(&a2, *(_BYTE **)(a3 + 4));
    *(float *)&v16[11] = 0.0;
    v16[2] = v9;
    memset(&v16[4], 0, 28);
    if ( !v6 && a5 == 1 )
    {
      v10 = *v7;
      if ( v10 )
      {
        v11 = *sub_101D4C30(v17, &a5, v10);
        v12 = *(int (__thiscall **)(int))(*(_DWORD *)v10 + 292);
        a5 = *(_DWORD *)dword_106BAFF0;
        v16[4] = v11;
        v13 = v12(v10);
        v16[12] = (*(int (__thiscall **)(int, int))(a5 + 112))(dword_106BAFF0, v13);
        if ( !v11 )
        {
          v14 = (float *)sub_101D4CB0(v17, v10);
          if ( v14 )
          {
            sub_101D3390((float *)&v16[5], v14);
          }
          else if ( 0.0 == ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v10 + 168))(v10) )
          {
            v15 = (const char *)v5[23];
            if ( !v15 )
              v15 = String;
            DevMsg("Don't know how to save model for physics object (class \"%s\")\n", v15);
          }
          else
          {
            *(float *)&v16[11] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v10 + 168))(v10);
          }
        }
      }
    }
    sub_101D49A0(v17 + 12, (int)v16);
  }
}
