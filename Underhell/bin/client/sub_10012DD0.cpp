void __thiscall sub_10012DD0(float *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // ecx

  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 836))(this);
  if ( this[754] <= (double)*((float *)off_103DC81C + 3) )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 788))(this) )
    {
      v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 788))(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 744))(v2) )
      {
        v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 788))(this);
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 928))(v3);
        v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 788))(this);
        v5 = this + 788;
        v6 = 48;
        do
        {
          if ( *v5 != -1 && *((_DWORD *)off_103DCD74 + 4 * (*v5 & 0xFFF) + 2) == *v5 >> 12 )
          {
            v7 = *((_DWORD *)off_103DCD74 + 4 * (*v5 & 0xFFF) + 1);
            if ( v7 )
            {
              if ( v4 != v7 )
                (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 940))(v7);
            }
          }
          ++v5;
          --v6;
        }
        while ( v6 );
      }
    }
  }
}
