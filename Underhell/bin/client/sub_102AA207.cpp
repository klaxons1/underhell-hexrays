HANDLE sub_102AA207()
{
  HANDLE result; // eax

  result = hObject;
  if ( hObject != (HANDLE)-1 && hObject != (HANDLE)-2 )
    return (HANDLE)CloseHandle(hObject);
  return result;
}
