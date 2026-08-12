void __thiscall sub_100F5F50(int this)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ecx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1456))(this);
  if ( *(float *)(this + 1672) <= (double)*(float *)(dword_106B31C8 + 12) && sub_100CF460((_DWORD *)this) )
  {
    v2 = sub_100CF460((_DWORD *)this);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 1020))(v2);
    v3 = sub_100CF460((_DWORD *)this);
    v4 = (_DWORD *)(this + 1908);
    v5 = 48;
    do
    {
      if ( *v4 != -1 && off_1061BE18[4 * (*v4 & 0xFFF) + 2] == *v4 >> 12 )
      {
        v6 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        if ( v6 )
        {
          if ( v3 != v6 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1032))(v6);
        }
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}
