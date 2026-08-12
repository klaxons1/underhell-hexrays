void __usercall sub_1019B7A0(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  float *v4; // eax
  int v5; // eax
  float *v6; // eax
  float *v7; // [esp+1Ch] [ebp-14h]
  float *v8; // [esp+1Ch] [ebp-14h]

  if ( !a1[911] )
  {
    v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 36))(a1);
    v3 = sub_100F29B0((int)(a1 + 838), a2, (int)a1, "effects/redflare");
    v4 = sub_100F2B60((int)(a1 + 838), (int)a1, 60, v3, v7);
    a1[911] = v4;
    if ( v4 )
    {
      *((_BYTE *)v4 + 50) = 0;
      *(_BYTE *)(a1[911] + 49) = 0;
      *(_BYTE *)(a1[911] + 48) = 0;
      *(float *)(a1[911] + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                          dword_10413198,
                                          0,
                                          360);
      *(float *)(a1[911] + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   1.0,
                                   4.0);
      *(float *)(a1[911] + 44) = 0.0;
      *(float *)(a1[911] + 40) = 10.0;
    }
  }
  if ( !a1[912] )
  {
    v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 36))(a1);
    v5 = sub_100F29B0((int)(a1 + 838), a2, (int)a1, "effects/yellowflare_noz");
    v6 = sub_100F2B60((int)(a1 + 838), (int)a1, 60, v5, v8);
    a1[912] = v6;
    if ( v6 )
    {
      *((_BYTE *)v6 + 50) = 0;
      *(_BYTE *)(a1[912] + 49) = 0;
      *(_BYTE *)(a1[912] + 48) = 0;
      *(float *)(a1[912] + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                          dword_10413198,
                                          0,
                                          360);
      *(float *)(a1[912] + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   1.0,
                                   4.0);
      *(float *)(a1[912] + 44) = 0.0;
      *(float *)(a1[912] + 40) = 10.0;
    }
  }
}
