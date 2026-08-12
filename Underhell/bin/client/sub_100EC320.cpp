void __thiscall sub_100EC320(int this, char a2, float *a3, float *a4)
{
  float *v5; // eax
  float v6; // [esp+4h] [ebp-18h] BYREF
  float v7; // [esp+8h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-10h]
  float v9; // [esp+10h] [ebp-Ch] BYREF
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]

  if ( (*(_BYTE *)(this + 148) & 8) != 0 )
  {
    if ( *(_BYTE *)(this + 76) )
    {
      v9 = *a3;
      v10 = a3[1];
      v11 = a3[2];
      v6 = *a4;
      v7 = a4[1];
      v8 = a4[2];
    }
    else
    {
      sub_101F1070(this + 12, a3, a4, &v9, &v6);
    }
    if ( a2 )
    {
      *(float *)(this + 80) = v9;
      *(float *)(this + 84) = v10;
      *(float *)(this + 88) = v11;
      *(float *)(this + 92) = v6;
      *(float *)(this + 96) = v7;
      *(float *)(this + 100) = v8;
    }
    else
    {
      v5 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 140) + 36))(*(_DWORD *)(this + 140));
      *(float *)(this + 92) = *v5;
      *(float *)(this + 96) = v5[1];
      *(float *)(this + 100) = v5[2];
      *(float *)(this + 80) = *(float *)(this + 92);
      *(float *)(this + 84) = *(float *)(this + 96);
      *(float *)(this + 88) = *(float *)(this + 100);
    }
  }
}
