void __thiscall sub_10100F90(void *this, void *a2, int a3, int *a4, int a5)
{
  bool v5; // bl
  int (__thiscall *v6)(void *); // eax
  int v7; // esi
  int v8; // ebx
  int (__thiscall *v9)(int); // eax
  int v10; // eax
  float *v11; // eax
  char *v12; // eax
  _DWORD v13[14]; // [esp+4h] [ebp-3Ch] BYREF
  int v14; // [esp+3Ch] [ebp-4h]
  int v15; // [esp+54h] [ebp+14h]

  v14 = (int)this;
  if ( a2 )
  {
    v5 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a2 + 204))(a2) == 0;
    memset(v13, 0, 0x34u);
    v6 = *(int (__thiscall **)(void *))(*(_DWORD *)a2 + 8);
    v13[13] = a4;
    v13[1] = *(_DWORD *)v6(a2);
    v13[0] = a5;
    if ( v5 )
      v13[3] = 0;
    else
      v13[3] = *(unsigned __int16 *)(a3 + 16);
    v13[2] = sub_100AF260(*(_BYTE **)(a3 + 4));
    *(float *)&v13[11] = 0.0;
    memset(&v13[4], 0, 28);
    if ( !v5 && a5 == 1 )
    {
      v7 = *a4;
      if ( *a4 )
      {
        v8 = sub_100FC620(v14, v7);
        v9 = *(int (__thiscall **)(int))(*(_DWORD *)v7 + 292);
        v15 = *(_DWORD *)dword_10436250;
        v13[4] = v8;
        v10 = v9(v7);
        v13[12] = (*(int (__thiscall **)(int, int))(v15 + 112))(dword_10436250, v10);
        if ( !v8 )
        {
          v11 = (float *)sub_100FC690(v14, v7);
          if ( v11 )
          {
            sub_100FAEB0((float *)&v13[5], v11);
          }
          else if ( 0.0 == ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 168))(v7) )
          {
            v12 = sub_10034D90(a2);
            DevMsg("Don't know how to save model for physics object (class \"%s\")\n", v12);
          }
          else
          {
            *(float *)&v13[11] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 168))(v7);
          }
        }
      }
    }
    sub_100FC770(v14 + 8, (int)v13);
  }
}
