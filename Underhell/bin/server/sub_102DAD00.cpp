void __thiscall sub_102DAD00(float *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // [esp+18h] [ebp-4h] BYREF

  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1264))(this) )
  {
    if ( *(float *)(dword_106B31C8 + 12) >= (double)this[1401] )
    {
      v2 = 0;
      for ( this[1401] = *(float *)(dword_106B31C8 + 12) + 0.4; v2 < sub_1016BFB0(&dword_10690DF8); ++v2 )
      {
        v3 = *(_DWORD *)(sub_1002A680(&dword_10690DF8) + 4 * v2);
        if ( (*(unsigned __int8 (__thiscall **)(float *, int, int *))(*(_DWORD *)this + 1276))(this, v3, &v4) )
          (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v3 + 1668))(v3, this, v4);
      }
    }
  }
}
