char *__thiscall sub_10394910(int this, int a2, int a3)
{
  char *result; // eax
  char *v5; // ebx

  result = (char *)__RTDynamicCast(
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CPropJeepEpisodic `RTTI Type Descriptor',
                     0);
  v5 = result;
  if ( result )
  {
    result = (char *)(**((int (__thiscall ***)(int, int, int))result + 372))((int)(result + 1488), this, 1);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)(this + 5312) + 328))(this + 5312, v5, a3);
      result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 5312) + 296))(this + 5312);
      if ( !*(_DWORD *)(this + 5328) )
        return sub_10023CB0((char *)this, 78);
    }
  }
  return result;
}
