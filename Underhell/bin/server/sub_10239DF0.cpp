void __thiscall sub_10239DF0(int this)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  float v9; // [esp+0h] [ebp-18h]
  float v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+14h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 912) )
  {
    v2 = *(_DWORD *)(this + 864);
    if ( v2 )
    {
      v3 = *(_DWORD *)(this + 868);
      if ( v3 <= v2 )
      {
        *(_DWORD *)(this + 824) = *(_DWORD *)(this + 876);
        *(_DWORD *)(this + 828) = 0;
        v4 = *(_DWORD *)(this + 820);
        v5 = v3 + 1;
        *(_DWORD *)(this + 868) = v5;
        v6 = v5 * ((255 - v4) / v2) + v4;
        *(_DWORD *)(this + 816) = v6;
        if ( v6 > 255 )
          *(_DWORD *)(this + 816) = 255;
        goto LABEL_12;
      }
    }
    else
    {
      *(_BYTE *)(this + 912) = 0;
      v11 = 16;
      sub_100332A0((int *)(this + 248), &v11);
      v7 = *(_DWORD *)(this + 880);
      if ( v7 || *(_DWORD *)(this + 896) )
      {
        *(_DWORD *)(this + 828) = v7;
        v8 = *(_DWORD *)(this + 896);
        *(_DWORD *)(this + 824) = 0;
        *(_DWORD *)(this + 844) = v8;
        *(_DWORD *)(this + 840) = 0;
LABEL_12:
        v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
        sub_100EC4A0((int *)this, v9, 0);
        return;
      }
      sub_102386F0(this, 4);
    }
  }
  else
  {
    if ( *(_BYTE *)(this + 913) )
      *(_BYTE *)(this + 912) = 1;
    else
      sub_102386F0(this, 4);
    sub_102384A0((_DWORD *)this);
    sub_102386F0(this, 0);
    v10 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v10, 0);
  }
}
