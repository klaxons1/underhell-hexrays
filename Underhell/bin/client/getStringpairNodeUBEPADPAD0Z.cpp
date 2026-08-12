char *__thiscall pairNode::getString(pairNode *this, char *a2, char *a3)
{
  char *result; // eax

  result = (char *)(*(int (__thiscall **)(_DWORD, char *, char *))(**((_DWORD **)this + 1) + 8))(
                     *((_DWORD *)this + 1),
                     a2,
                     a3);
  if ( result < a3 )
    return (char *)(*(int (__thiscall **)(_DWORD, char *, char *))(**((_DWORD **)this + 2) + 8))(
                     *((_DWORD *)this + 2),
                     result,
                     a3);
  return result;
}
