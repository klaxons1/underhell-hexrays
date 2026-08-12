void __thiscall sub_1010EE60(float *this)
{
  float *v2; // eax
  int (__thiscall *v3)(float *); // edx
  float *v4; // eax
  int v5; // ecx
  int v6; // ebx
  int **v7; // edi
  float v8[3]; // [esp+4h] [ebp-Ch]

  v2 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 8))(this);
  v8[0] = *v2 - this[189];
  v8[1] = v2[1] - this[190];
  v3 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 8);
  v8[2] = v2[2] - this[191];
  v4 = (float *)v3(this);
  v5 = 0;
  this[189] = *v4;
  this[190] = v4[1];
  this[191] = v4[2];
  do
  {
    if ( fabs(v8[v5]) > 1.0 )
    {
      this[192] = *((float *)off_103DC81C + 3);
      return;
    }
    ++v5;
  }
  while ( v5 < 3 );
  if ( !*((_BYTE *)this + 752) && *((float *)off_103DC81C + 3) - this[192] >= *(float *)(dword_10437384 + 44) )
  {
    v6 = 0;
    if ( *((int *)this + 1) > 0 )
    {
      v7 = (int **)(this + 7);
      do
      {
        if ( *v7 )
        {
          sub_101025B0(*v7);
          (*(void (__thiscall **)(int *))(**v7 + 100))(*v7);
        }
        ++v6;
        v7 += 6;
      }
      while ( v6 < *((_DWORD *)this + 1) );
    }
  }
}
