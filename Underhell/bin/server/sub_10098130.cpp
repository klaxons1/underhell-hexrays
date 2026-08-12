char __thiscall sub_10098130(_BYTE *this, float a2)
{
  float v2; // ebx
  int v3; // eax
  float v4; // eax
  int *v5; // eax
  int v6; // esi
  int v7; // eax
  int v9; // [esp-4h] [ebp-1Ch]
  int v10; // [esp+8h] [ebp-10h] BYREF
  float v11; // [esp+Ch] [ebp-Ch]
  char v12[4]; // [esp+10h] [ebp-8h] BYREF
  _BYTE *v13; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  v3 = *(_DWORD *)LODWORD(a2);
  v13 = this;
  v10 = v3;
  if ( sub_10095220(word_106938B8, (int)&v10) == -1 )
  {
    v4 = COERCE_FLOAT(sub_10184390(36));
    if ( v4 == 0.0 )
    {
      a2 = 0.0;
    }
    else
    {
      qmemcpy((void *)LODWORD(v4), (const void *)LODWORD(v2), 0x24u);
      a2 = v4;
    }
    sub_10097CF0((int)word_106938B8, (int *)LODWORD(v2), (int *)&a2);
  }
  v5 = (int *)sub_10162BE0(&a2, *(_DWORD *)LODWORD(v2));
  v11 = -1.0;
  v6 = (int)(v13 + 812);
  v10 = *v5;
  LOBYTE(v7) = sub_10095150(v13 + 812, (int)&v10);
  if ( (_BYTE)v7 == 0xFF )
  {
    v9 = *(_DWORD *)LODWORD(v2);
    a2 = -1.0;
    v10 = *(_DWORD *)sub_10162BE0(v12, v9);
    v11 = a2;
    sub_10094200((_BYTE *)v6, (int)&v10, &v13, &a2);
    v7 = *(_DWORD *)(v6 + 4) + 12 * sub_10097720(v6, (char)v13, SLOBYTE(a2)) + 4;
    if ( v7 )
    {
      *(_DWORD *)v7 = v10;
      *(float *)(v7 + 4) = v11;
    }
  }
  return v7;
}
