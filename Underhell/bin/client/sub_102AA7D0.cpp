void __thiscall sub_102AA7D0(_BYTE *this, int a2, _BYTE *a3)
{
  _BYTE *v3; // esi
  int v5; // eax
  int v6; // ebx
  void *v7; // edi
  int v8; // edi
  _BYTE *v9; // edi
  int v10; // eax
  char *v11; // eax
  _BYTE v12[12]; // [esp+8h] [ebp-48h] BYREF
  _BYTE v13[12]; // [esp+14h] [ebp-3Ch] BYREF
  _DWORD v14[12]; // [esp+20h] [ebp-30h] BYREF

  v3 = a3;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      v5 = *((_DWORD *)v3 + 2);
      v6 = a2 + *((_DWORD *)v3 + 3);
      if ( (unsigned int)(v5 - 15) <= 0xD || v5 == 6 )
        goto LABEL_19;
      sub_102AB7B0(0);
      v7 = *(void **)v3;
      sub_102AA630((int)this);
      sub_102AB7B0(v7);
      a3 = v13;
      v8 = sub_102AA510(this, (int)&a3);
      sub_102AD190(v13);
      if ( v8 >= 0 )
      {
        v9 = *(_BYTE **)(*(_DWORD *)this + 4 * v8);
        if ( v9 )
          goto LABEL_10;
      }
      if ( *((_DWORD *)v3 + 1) )
        break;
LABEL_18:
      sub_102AD190(v12);
LABEL_19:
      v3 += 24;
      if ( !*((_DWORD *)v3 + 2) )
        return;
    }
    sub_1022EE70(v14, *((_DWORD *)v3 + 1), strlen(*((const char **)v3 + 1)), 9);
    sub_102AD1D0(*((_DWORD *)v3 + 2), v14);
    v9 = v12;
    if ( v14[2] >= 0 && v14[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v14[0]);
LABEL_10:
    v10 = *(_DWORD *)v9;
    if ( *((_DWORD *)v3 + 2) == *(_DWORD *)v9 )
    {
      if ( v10 == 5 )
      {
        v11 = (char *)sub_1022CF00(*((_DWORD **)v9 + 2));
        sub_102282F0((char *)v6, v11, *((_DWORD *)v3 + 4));
      }
      else if ( v10 == 3 && *((_DWORD *)v3 + 4) == 16 )
      {
        *(_DWORD *)v6 = **((_DWORD **)v9 + 2);
        *(_DWORD *)(v6 + 4) = **((_DWORD **)v9 + 2);
        *(_DWORD *)(v6 + 8) = **((_DWORD **)v9 + 2);
        *(_DWORD *)(v6 + 12) = **((_DWORD **)v9 + 2);
      }
      else
      {
        memcpy_0((void *)v6, *((const void **)v9 + 2), *((_DWORD *)v3 + 4));
      }
    }
    else
    {
      Warning("CDmxElement::UnpackIntoStructure: Mismatched attribute type in attribute \"%s\"!\n", *(const char **)v3);
    }
    goto LABEL_18;
  }
}
